
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int name; } ;
struct node {int fullpath; } ;
struct marker {scalar_t__ type; int ref; int offset; } ;
struct dt_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct node*,int ,char*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,char) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char**,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct dt_info *VAR_1, struct node *VAR_2,
       struct node *VAR_3, struct property *VAR_4,
       struct marker *VAR_5)
{
 char *VAR_6;


 FUNC_1(VAR_5->type == VAR_0);


 if (FUNC_4(VAR_3->fullpath, ':') || FUNC_4(VAR_4->name, ':'))
  FUNC_2("arguments should not contain ':'\n");

 FUNC_6(&VAR_6, "%s:%s:%u",
   VAR_3->fullpath, VAR_4->name, VAR_5->offset);
 FUNC_0(VAR_2, VAR_5->ref, VAR_6, FUNC_5(VAR_6) + 1);

 FUNC_3(VAR_6);
}
