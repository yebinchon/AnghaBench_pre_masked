
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int channels; scalar_t__ trigger_bits; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_10__ {TYPE_1__* devc; } ;


 int VAR_0 ;
 TYPE_8__** VAR_1 ;
 int FUNC_0 (TYPE_1__*,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_6 (int VAR_3, int VAR_4, int VAR_5)
{
 sb_devc *VAR_6 = VAR_1[VAR_3]->devc;

 FUNC_5(VAR_6);
 FUNC_2(VAR_6, 1);
 FUNC_3 (VAR_6, 0xb8, 4);
 FUNC_0 (VAR_6, 0xa8, 0x03, 3 - VAR_6->channels);
 FUNC_3 (VAR_6, 0xb9, 2);

 FUNC_1 (VAR_6, VAR_2);

 FUNC_0 (VAR_6, 0xb1, 0xf0, 0x50);
 FUNC_0 (VAR_6, 0xb2, 0xf0, 0x50);

 FUNC_4(VAR_6, VAR_0);

 VAR_6->trigger_bits = 0;
 return 0;
}
