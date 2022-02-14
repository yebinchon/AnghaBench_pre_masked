
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpp_configuration {int akm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (char const*,size_t,char*) ;
 int FUNC_1 (struct dpp_configuration*) ;
 char* FUNC_2 (char const*,char) ;
 size_t FUNC_3 (char const*) ;
 struct dpp_configuration* FUNC_4 (int) ;

struct dpp_configuration * FUNC_5(const char *VAR_6)
{
 struct dpp_configuration *VAR_7;
 const char *VAR_8;
 size_t VAR_9;

 VAR_7 = FUNC_4(sizeof(*VAR_7));
 if (!VAR_7)
  goto fail;

 VAR_8 = FUNC_2(VAR_6, ' ');
 if (VAR_8)
  VAR_9 = VAR_8 - VAR_6;
 else
  VAR_9 = FUNC_3(VAR_6);

 if (FUNC_0(VAR_6, VAR_9, "psk"))
  VAR_7->akm = VAR_1;
 else if (FUNC_0(VAR_6, VAR_9, "sae"))
  VAR_7->akm = VAR_4;
 else if (FUNC_0(VAR_6, VAR_9, "psk-sae") ||
   FUNC_0(VAR_6, VAR_9, "psk+sae"))
  VAR_7->akm = VAR_2;
 else if (FUNC_0(VAR_6, VAR_9, "sae-dpp") ||
   FUNC_0(VAR_6, VAR_9, "dpp+sae"))
  VAR_7->akm = VAR_5;
 else if (FUNC_0(VAR_6, VAR_9, "psk-sae-dpp") ||
   FUNC_0(VAR_6, VAR_9, "dpp+psk+sae"))
  VAR_7->akm = VAR_3;
 else if (FUNC_0(VAR_6, VAR_9, "dpp"))
  VAR_7->akm = VAR_0;
 else
  goto fail;

 return VAR_7;
fail:
 FUNC_1(VAR_7);
 return ((void*)0);
}
