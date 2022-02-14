
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void dba_array ;
typedef enum form { ____Placeholder_form } form ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,void*) ;
 void* FUNC_1 (int,int) ;
 void* FUNC_2 (char const*) ;
 void* FUNC_3 (char const*,int) ;

struct dba_array *
FUNC_4(struct dba_array *VAR_3, const char *VAR_4,
    const char *VAR_5, const char *VAR_6, enum form VAR_7)
{
 struct dba_array *VAR_8, *VAR_9;

 VAR_8 = FUNC_1(VAR_2, 0);
 VAR_9 = FUNC_1(1, VAR_1 | VAR_0);
 FUNC_0(VAR_8, VAR_9);
 VAR_9 = FUNC_1(1, VAR_1 | VAR_0);
 FUNC_0(VAR_8, VAR_9);
 if (VAR_4 != ((void*)0) && *VAR_4 != '\0') {
  VAR_9 = FUNC_1(1, VAR_1 | VAR_0);
  FUNC_0(VAR_9, (void *)VAR_4);
 } else
  VAR_9 = ((void*)0);
 FUNC_0(VAR_8, VAR_9);
 FUNC_0(VAR_8, FUNC_2(VAR_5));
 VAR_9 = FUNC_1(1, VAR_1 | VAR_0);
 FUNC_0(VAR_9, FUNC_3(VAR_6, VAR_7));
 FUNC_0(VAR_8, VAR_9);
 FUNC_0(VAR_3, VAR_8);
 return VAR_8;
}
