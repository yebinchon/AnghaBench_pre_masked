
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int synch; int seljit; TYPE_1__* peer; } ;
typedef TYPE_2__ peer_select ;
struct TYPE_4__ {double offset; } ;


 double FUNC_0 (double,double) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 double VAR_1 ;

__attribute__((used)) static void
FUNC_3(
 peer_select * VAR_2,
 int VAR_3,
 int VAR_4
 )
{
 int VAR_5;
 double VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_8 = VAR_9 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_6 = 1. / VAR_2[VAR_5].synch;
  VAR_7 += VAR_6;
  VAR_8 += VAR_6 * VAR_2[VAR_5].peer->offset;
  VAR_9 += VAR_6 * FUNC_0(VAR_2[VAR_5].peer->offset,
      VAR_2[VAR_4].peer->offset);
 }
 VAR_1 = VAR_8 / VAR_7;
 VAR_0 = FUNC_1(VAR_9 / VAR_7 + FUNC_2(VAR_2[VAR_4].seljit));
}
