
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* outputc ) (int,unsigned char) ;} ;
struct TYPE_3__ {int (* hw_control ) (unsigned char,unsigned char*) ;int (* set_instr ) (int ,unsigned char,unsigned char) ;int (* start_note ) (int ,unsigned char,unsigned char,unsigned char) ;int (* kill_note ) (int ,unsigned char,int,unsigned char) ;} ;
 scalar_t__ VAR_0 ;







 int VAR_1 ;
 int FUNC_0 (unsigned char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__** VAR_4 ;
 int * VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 long VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char*,int) ;
 int FUNC_5 (unsigned char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_6 (unsigned char*) ;
 int VAR_14 ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (int ,unsigned char,int,unsigned char) ;
 int FUNC_9 (int ,unsigned char,unsigned char,unsigned char) ;
 int FUNC_10 (int ,unsigned char,unsigned char) ;
 int FUNC_11 (int,unsigned char) ;
 int FUNC_12 (unsigned char,unsigned char*) ;
 TYPE_1__** VAR_15 ;
 int VAR_16 ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(unsigned char *VAR_17)
{






 unsigned int *VAR_18;

 switch (VAR_17[0])
 {
  case 133:
   if (VAR_16 & (1 << 0))
    if (VAR_15[0])
     VAR_15[0]->kill_note(0, VAR_17[1], 255, VAR_17[3]);
   break;

  case 132:
   if (VAR_17[4] < 128 || VAR_17[4] == 255)
    if (VAR_16 & (1 << 0))
     if (VAR_15[0])
      VAR_15[0]->start_note(0, VAR_17[1], VAR_17[2], VAR_17[3]);
   break;

  case 128:
   VAR_18 = (unsigned int *) VAR_17;



   *VAR_18 = (*VAR_18 >> 8) & 0xffffff;

   if (*VAR_18 > 0)
   {
    long VAR_19;

    VAR_12 = 1;
    VAR_19 = *VAR_18;
    VAR_9 = VAR_19;

    FUNC_1(VAR_19);

    if ((VAR_0 - VAR_11) >= VAR_8)
     FUNC_13(&VAR_13);




    return 1;
   }
   break;

  case 131:
   if (VAR_16 & (1 << 0))
    if (VAR_15[0])
     VAR_15[0]->set_instr(0, VAR_17[1], VAR_17[2]);
   break;

  case 129:


   VAR_14 = VAR_2;
   VAR_10 = 0;
   VAR_9 = 0;
   break;

  case 134:


   if (VAR_5[VAR_17[2]])
   {
    int VAR_20;

    VAR_20 = VAR_17[2];

    if (VAR_20 < 0 || VAR_20 >= VAR_7 || VAR_4[VAR_20] == ((void*)0))
     break;

    if (!VAR_4[VAR_20]->outputc(VAR_20, VAR_17[1]))
    {




     VAR_12 = 1;
     FUNC_1(-1);
     return 2;
    }
    else
     VAR_6[VAR_20] = 1;
   }
   break;

  case 136:
   FUNC_4(VAR_17, 4);


   break;

  case 130:
   if ((int) VAR_17[1] < VAR_3)
    VAR_15[VAR_17[1]]->hw_control(VAR_17[1], VAR_17);
   break;

  case 135:
   FUNC_0(VAR_17);
   break;

  case 140:
   FUNC_3(VAR_17);
   break;

  case 141:
   FUNC_2(VAR_17);
   break;

  case 137:
   if (FUNC_7(VAR_17) == VAR_1)
   {
    return 1;
   }
   break;

  case 139:
   FUNC_5(VAR_17);
   break;

  case 138:
   FUNC_6(VAR_17);
   break;

  default:;
 }
 return 0;
}
