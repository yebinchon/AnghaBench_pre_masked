
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* u_short ;
typedef int u_long ;
typedef int u_char ;
struct TYPE_9__ {size_t secretsize; int lifetime; int * keyacclist; int * secret; void* type; void* flags; int keyid; } ;
typedef TYPE_1__ symkey ;
typedef int keyid_t ;
struct TYPE_10__ {int f; } ;
typedef int KeyAccT ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_3 (int ,TYPE_1__*,TYPE_2__) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 int VAR_5 ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static void
FUNC_6(
 keyid_t VAR_7,
 u_short VAR_8,
 u_short VAR_9,
 u_long VAR_10,
 size_t VAR_11,
 u_char * VAR_12,
 KeyAccT * VAR_13
 )
{
 symkey * VAR_14;
 symkey ** VAR_15;

 VAR_15 = &VAR_4[FUNC_1(VAR_7)];


 if (VAR_1 < 1)
  FUNC_5(-1);
 FUNC_4(VAR_14, VAR_0, VAR_6.f);
 FUNC_0(VAR_14 != ((void*)0));
 VAR_14->keyid = VAR_7;
 VAR_14->flags = VAR_8;
 VAR_14->type = VAR_9;
 VAR_14->secretsize = VAR_11;
 VAR_14->secret = VAR_12;
 VAR_14->keyacclist = VAR_13;
 VAR_14->lifetime = VAR_10;
 FUNC_2(*VAR_15, VAR_14, VAR_3);
 FUNC_3(VAR_5, VAR_14, VAR_6);
 VAR_1--;
 VAR_2++;
}
