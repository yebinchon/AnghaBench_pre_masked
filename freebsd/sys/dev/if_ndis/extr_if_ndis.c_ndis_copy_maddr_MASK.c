
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sockaddr_dl {int dummy; } ;
struct mclist_ctx {scalar_t__ mclistsz; scalar_t__ mclist; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sockaddr_dl*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static u_int
FUNC_2(void *VAR_1, struct sockaddr_dl *VAR_2, u_int VAR_3)
{
 struct mclist_ctx *VAR_4 = VAR_1;

 if (VAR_3 < VAR_4->mclistsz)
  FUNC_1(FUNC_0(VAR_2), VAR_4->mclist + (VAR_0 * VAR_3),
      VAR_0);
 return (1);
}
