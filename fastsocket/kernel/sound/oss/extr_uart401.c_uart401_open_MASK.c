
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int opened; void (* midi_input_intr ) (int,unsigned char) ;scalar_t__ disabled; } ;
typedef TYPE_1__ uart401_devc ;
struct TYPE_7__ {scalar_t__ devc; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_3__** VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, int VAR_3,
      void (*VAR_4) (int VAR_5, unsigned char VAR_6),
      void (*VAR_7) (int VAR_8)
)
{
 uart401_devc *VAR_9 = (uart401_devc *) VAR_1[VAR_2]->devc;

 if (VAR_9->opened)
  return -VAR_0;



 while (FUNC_1(VAR_9))
  FUNC_2(VAR_9);

 VAR_9->midi_input_intr = VAR_4;
 VAR_9->opened = VAR_3;
 FUNC_0(VAR_9);
 VAR_9->disabled = 0;

 return 0;
}
