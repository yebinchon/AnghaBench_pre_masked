
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {int aek; TYPE_1__* sae; int * addr; } ;
struct mesh_rsn {TYPE_2__* wpa_s; } ;
typedef int context ;
struct TYPE_4__ {int * own_addr; } ;
struct TYPE_3__ {int pmk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int ,int,char*,int *,int,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct mesh_rsn *VAR_3, struct sta_info *VAR_4)
{
 u8 *VAR_5 = VAR_3->wpa_s->own_addr;
 u8 *VAR_6 = VAR_4->addr;
 u8 *VAR_7, *VAR_8;
 u8 VAR_9[VAR_2 + 2 * VAR_0], *VAR_10 = VAR_9;






 FUNC_0(VAR_10, VAR_1);
 VAR_10 += VAR_2;

 if (FUNC_1(VAR_5, VAR_6, VAR_0) < 0) {
  VAR_7 = VAR_5;
  VAR_8 = VAR_6;
 } else {
  VAR_7 = VAR_6;
  VAR_8 = VAR_5;
 }
 FUNC_2(VAR_10, VAR_7, VAR_0);
 VAR_10 += VAR_0;
 FUNC_2(VAR_10, VAR_8, VAR_0);

 FUNC_3(VAR_4->sae->pmk, sizeof(VAR_4->sae->pmk), "AEK Derivation",
     VAR_9, sizeof(VAR_9), VAR_4->aek, sizeof(VAR_4->aek));
}
