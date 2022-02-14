
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gcov_node {char* links; } ;
struct dentry {int dummy; } ;
struct TYPE_3__ {scalar_t__ ext; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 char FUNC_1 (int ,struct dentry*,char*) ;
 int FUNC_2 (char) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__* VAR_3 ;
 char* FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (struct gcov_node*) ;
 char* FUNC_8 (int,int ,int) ;

__attribute__((used)) static void
FUNC_9(struct gcov_node *VAR_4, struct dentry *VAR_5)
{
 const char *VAR_6;
 char *VAR_7;
 int VAR_8;
 int VAR_9;

 for (VAR_8 = 0; VAR_3[VAR_8].ext; VAR_8++)
                ;
 VAR_4->links = FUNC_8((VAR_8*sizeof(struct dentry *)), VAR_0, VAR_1|VAR_2);
 if (VAR_4->links == ((void*)0))
  return;
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_7 = FUNC_6(
    FUNC_5(FUNC_7(VAR_4)),
    &VAR_3[VAR_9]);
  if (VAR_7 == ((void*)0))
   goto out_err;
  VAR_6 = FUNC_0(VAR_7);
  if (VAR_6 == VAR_7)
   goto out_err;
  VAR_4->links[VAR_9] = FUNC_1(FUNC_3(VAR_6),
       VAR_5, VAR_7);
  if (!VAR_4->links[VAR_9])
   goto out_err;
  FUNC_4(VAR_7, VAR_0);
 }

 return;
out_err:
 FUNC_4(VAR_7, VAR_0);
 while (VAR_9-- > 0)
  FUNC_2(VAR_4->links[VAR_9]);
 FUNC_4(VAR_4->links, VAR_0);
 VAR_4->links = ((void*)0);
}
