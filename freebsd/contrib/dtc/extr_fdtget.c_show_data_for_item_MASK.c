
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display_info {int mode; int default_val; } ;




 int FUNC_0 (char const*) ;
 void* FUNC_1 (void const*,int,char const*,int*) ;
 int FUNC_2 (void const*,int) ;
 int FUNC_3 (void const*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char const*,int) ;
 int FUNC_7 (struct display_info*,void const*,int) ;

__attribute__((used)) static int FUNC_8(const void *VAR_0, struct display_info *VAR_1,
  int VAR_2, const char *VAR_3)
{
 const void *VAR_4 = ((void*)0);
 int VAR_5, VAR_6 = 0;

 switch (VAR_1->mode) {
 case 129:
  VAR_6 = FUNC_2(VAR_0, VAR_2);
  break;

 case 128:
  VAR_6 = FUNC_3(VAR_0, VAR_2);
  break;

 default:
  FUNC_0(VAR_3);
  VAR_4 = FUNC_1(VAR_0, VAR_2, VAR_3, &VAR_5);
  if (VAR_4) {
   if (FUNC_7(VAR_1, VAR_4, VAR_5))
    VAR_6 = -1;
   else
    FUNC_4("\n");
  } else if (VAR_1->default_val) {
   FUNC_5(VAR_1->default_val);
  } else {
   FUNC_6(VAR_3, VAR_5);
   VAR_6 = -1;
  }
  break;
 }

 return VAR_6;
}
