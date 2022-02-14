
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uni_msg {int dummy; } ;
struct ccuser {TYPE_1__* cc; } ;
struct ccsig {int dummy; } ;
typedef enum user_sig { ____Placeholder_user_sig } user_sig ;
struct TYPE_3__ {int sigs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct ccsig*,int ) ;
 int FUNC_1 (TYPE_1__*,char*,int ,struct ccuser*) ;
 int * VAR_2 ;
 int VAR_3 ;
 struct ccsig* FUNC_2 (TYPE_1__*,int ,struct ccuser*,int ,int,struct uni_msg*,int ) ;

int
FUNC_3(struct ccuser *VAR_4, enum user_sig VAR_5, struct uni_msg *VAR_6)
{
 struct ccsig *VAR_7;

 VAR_7 = FUNC_2(VAR_4->cc, VAR_1, VAR_4, VAR_6 != ((void*)0), VAR_5, VAR_6, 0);
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 FUNC_0(&VAR_4->cc->sigs, VAR_7, VAR_3);
 FUNC_1(VAR_4->cc, "queuing sig %s to user %p", VAR_2[VAR_5],
     VAR_4);
 return (0);
}
