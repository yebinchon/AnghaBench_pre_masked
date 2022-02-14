
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gcov_node {char* links; } ;
struct dentry {int dummy; } ;
struct TYPE_5__ {scalar_t__ ext; } ;
struct TYPE_4__ {int filename; } ;


 int VAR_0 ;
 char FUNC_0 (int ,struct dentry*,char*) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*) ;
 TYPE_2__* VAR_1 ;
 char* FUNC_3 (int ,TYPE_2__*) ;
 TYPE_1__* FUNC_4 (struct gcov_node*) ;
 char* FUNC_5 (int,int,int ) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*,char) ;

__attribute__((used)) static void FUNC_8(struct gcov_node *VAR_2, struct dentry *VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_1[VAR_6].ext; VAR_6++)
                ;
 VAR_2->links = FUNC_5(VAR_6, sizeof(struct dentry *), VAR_0);
 if (!VAR_2->links)
  return;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_5 = FUNC_3(FUNC_4(VAR_2)->filename,
      &VAR_1[VAR_7]);
  if (!VAR_5)
   goto out_err;
  VAR_4 = FUNC_7(VAR_5, '/');
  if (!VAR_4)
   goto out_err;
  VAR_4++;
  VAR_2->links[VAR_7] = FUNC_0(FUNC_2(VAR_4),
       VAR_3, VAR_5);
  if (!VAR_2->links[VAR_7])
   goto out_err;
  FUNC_6(VAR_5);
 }

 return;
out_err:
 FUNC_6(VAR_5);
 while (VAR_7-- > 0)
  FUNC_1(VAR_2->links[VAR_7]);
 FUNC_6(VAR_2->links);
 VAR_2->links = ((void*)0);
}
