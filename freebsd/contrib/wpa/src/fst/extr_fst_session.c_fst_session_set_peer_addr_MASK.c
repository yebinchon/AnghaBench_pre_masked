
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * new_peer_addr; int * old_peer_addr; } ;
struct fst_session {TYPE_1__ data; } ;
typedef scalar_t__ Boolean ;


 int VAR_0 ;
 int FUNC_0 (int *,int const*,int ) ;

void FUNC_1(struct fst_session *VAR_1, const u8 *VAR_2,
          Boolean VAR_3)
{
 u8 *VAR_4 = VAR_3 ? VAR_1->data.old_peer_addr : VAR_1->data.new_peer_addr;

 FUNC_0(VAR_4, VAR_2, VAR_0);
}
