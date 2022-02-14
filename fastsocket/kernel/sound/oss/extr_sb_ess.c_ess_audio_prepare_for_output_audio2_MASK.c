
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_7__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int channels; scalar_t__ bits; scalar_t__ trigger_bits; } ;
typedef TYPE_1__ sb_devc ;
struct TYPE_9__ {TYPE_1__* devc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_7__** VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int,unsigned char) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_5 (int VAR_3, int VAR_4, int VAR_5)
{
 sb_devc *VAR_6 = VAR_2[VAR_3]->devc;
 unsigned char VAR_7;
 FUNC_0 (VAR_6, 0x78, 0xd0, 0xd0);

 FUNC_4(VAR_6, 2);


 VAR_7 = FUNC_1 (VAR_6, 0x7a) & 0x18;


 if (VAR_6->channels != 1) VAR_7 |= 0x02;


 if (VAR_6->bits != VAR_0) VAR_7 |= 0x05;


 VAR_7 |= 0x60;

 FUNC_3 (VAR_6, 0x7a, VAR_7);

 FUNC_2 (VAR_6, VAR_1);

 VAR_6->trigger_bits = 0;
 return 0;
}
