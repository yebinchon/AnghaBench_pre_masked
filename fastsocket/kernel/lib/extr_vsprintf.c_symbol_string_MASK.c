
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printf_spec {int field_width; int flags; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,int *,int *,int *,char*) ;
 char* FUNC_1 (char*,char*,unsigned long,struct printf_spec) ;
 int FUNC_2 (char*,unsigned long) ;
 char* FUNC_3 (char*,char*,char*,struct printf_spec) ;

__attribute__((used)) static char *FUNC_4(char *VAR_4, char *VAR_5, void *VAR_6,
    struct printf_spec VAR_7, char VAR_8)
{
 unsigned long VAR_9 = (unsigned long) VAR_6;
 VAR_7.field_width = 2*sizeof(void *);
 VAR_7.flags |= VAR_2 | VAR_1 | VAR_3;
 VAR_7.base = 16;
 return FUNC_1(VAR_4, VAR_5, VAR_9, VAR_7);

}
