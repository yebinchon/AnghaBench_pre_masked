
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netpoll_info {int rx_flags; } ;
struct napi_struct {int (* poll ) (struct napi_struct*,int) ;int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct napi_struct*,int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct napi_struct*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(struct netpoll_info *VAR_4,
    struct napi_struct *VAR_5, int VAR_6)
{
 int VAR_7;





 if (!FUNC_5(VAR_1, &VAR_5->state))
  return VAR_6;

 VAR_4->rx_flags |= VAR_2;
 FUNC_1(&VAR_3);
 FUNC_3(VAR_0, &VAR_5->state);

 VAR_7 = VAR_5->poll(VAR_5, VAR_6);
 FUNC_6(VAR_5);

 FUNC_2(VAR_0, &VAR_5->state);
 FUNC_0(&VAR_3);
 VAR_4->rx_flags &= ~VAR_2;

 return VAR_6 - VAR_7;
}
