
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int db; scalar_t__ mxAlloc; scalar_t__ accError; } ;
typedef TYPE_1__ StrAccum ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(StrAccum *VAR_2, u8 VAR_3){
  FUNC_0( VAR_3==VAR_0 || VAR_3==VAR_1 );
  VAR_2->accError = VAR_3;
  if( VAR_2->mxAlloc ) FUNC_2(VAR_2);
  if( VAR_3==VAR_1 ) FUNC_1(VAR_2->db, VAR_3);
}
