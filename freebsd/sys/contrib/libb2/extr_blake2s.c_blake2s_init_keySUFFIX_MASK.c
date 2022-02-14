
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int blake2s_state ;
struct TYPE_7__ {int member_0; } ;
struct TYPE_6__ {int member_0; } ;
struct TYPE_8__ {int member_0; } ;
struct TYPE_9__ {size_t member_0; size_t member_1; int member_2; int member_3; TYPE_2__ member_9; TYPE_1__ member_8; int member_7; int member_6; TYPE_3__ member_5; int member_4; } ;
typedef TYPE_4__ blake2s_param ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (int *,TYPE_4__ const*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,void const*,size_t) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int) ;

int FUNC_5( blake2s_state *VAR_3, size_t VAR_4, const void *VAR_5, size_t VAR_6 )
{
  if ( ( !VAR_4 ) || ( VAR_4 > VAR_2 ) ) return -1;

  if ( ( !VAR_5 ) || ( !VAR_6 ) || VAR_6 > VAR_1 ) return -1;

  const blake2s_param VAR_7 =
  {
    VAR_4,
    VAR_6,
    1,
    1,
    0,
    {0},
    0,
    0,
    {0},
    0
  };

  if( FUNC_0( VAR_3, &VAR_7 ) < 0 )
    return -1;

  {
    uint8_t VAR_8[VAR_0];
    FUNC_3( VAR_8, 0, VAR_0 );
    FUNC_2( VAR_8, VAR_5, VAR_6 );
    FUNC_1( VAR_3, VAR_8, VAR_0 );
    FUNC_4( VAR_8, VAR_0 );
  }
  return 0;
}
