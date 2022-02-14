
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*,size_t const) ;
 int FUNC_3 (char*,size_t const,char*,char const*,char const*,char const*) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (size_t const) ;

int FUNC_6(const char *VAR_2, const char *VAR_3)
{
 const size_t VAR_4 = VAR_1;
 char *VAR_5 = FUNC_5(VAR_4),
      *VAR_6 = FUNC_5(VAR_4);
 int VAR_7 = -1;

 if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
  goto out_free;

 FUNC_3(VAR_6, VAR_4, "%s/.build-id/%.2s/%s",
   VAR_3, VAR_2, VAR_2 + 2);

 if (FUNC_0(VAR_6, VAR_0))
  goto out_free;

 if (FUNC_2(VAR_6, VAR_5, VAR_4 - 1) < 0)
  goto out_free;

 if (FUNC_4(VAR_6))
  goto out_free;




 FUNC_3(VAR_6, VAR_4, "%s/.build-id/%.2s/%s",
   VAR_3, VAR_2, VAR_5);

 if (FUNC_4(VAR_6))
  goto out_free;

 VAR_7 = 0;
out_free:
 FUNC_1(VAR_5);
 FUNC_1(VAR_6);
 return VAR_7;
}
