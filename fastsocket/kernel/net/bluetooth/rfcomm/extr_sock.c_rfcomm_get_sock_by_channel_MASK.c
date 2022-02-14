
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
typedef int bdaddr_t ;
struct TYPE_2__ {int lock; } ;


 struct sock* FUNC_0 (int,int ,int *) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static inline struct sock *FUNC_4(int VAR_1, u8 VAR_2, bdaddr_t *VAR_3)
{
 struct sock *VAR_4;
 FUNC_2(&VAR_0.lock);
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4) FUNC_1(VAR_4);
 FUNC_3(&VAR_0.lock);
 return VAR_4;
}
