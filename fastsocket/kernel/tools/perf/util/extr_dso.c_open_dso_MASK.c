
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct machine {char* root_dir; } ;
struct dso {int data_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct dso*,int ,char*,char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct dso *VAR_4, struct machine *VAR_5)
{
 char *VAR_6 = (char *) "";
 char *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_3);
 if (!VAR_7)
  return -VAR_1;

 if (VAR_5)
  VAR_6 = VAR_5->root_dir;

 if (FUNC_0(VAR_4, VAR_4->data_type,
      VAR_6, VAR_7, VAR_3)) {
  FUNC_1(VAR_7);
  return -VAR_0;
 }

 VAR_8 = FUNC_3(VAR_7, VAR_2);
 FUNC_1(VAR_7);
 return VAR_8;
}
