
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int channel; int buffer; } ;
struct TYPE_3__ {int channel; int buffer; } ;
struct ad1816_info {TYPE_2__ pch; TYPE_1__ rch; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct ad1816_info*) ;
 int FUNC_1 (struct ad1816_info*) ;
 int FUNC_2 (int ) ;
 unsigned char FUNC_3 (struct ad1816_info*,int ) ;
 int FUNC_4 (struct ad1816_info*,int ,unsigned char) ;
 int FUNC_5 (char*,unsigned char) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
     struct ad1816_info *VAR_4 = (struct ad1816_info *)VAR_3;
     unsigned char VAR_5, VAR_6 = 0;

 FUNC_0(VAR_4);

     VAR_5 = FUNC_3(VAR_4, VAR_0);


     if (VAR_5 & ~(VAR_1 | VAR_2)) {
  FUNC_5("pcm: stray int (%x)\n", VAR_5);
  VAR_5 &= VAR_1 | VAR_2;
     }

     if (FUNC_6(VAR_4->rch.buffer) && (VAR_5 & VAR_1)) {
  FUNC_1(VAR_4);
  FUNC_2(VAR_4->rch.channel);
  FUNC_0(VAR_4);
  VAR_6 |= VAR_1;
     }

     if (FUNC_6(VAR_4->pch.buffer) && (VAR_5 & VAR_2)) {
  FUNC_1(VAR_4);
  FUNC_2(VAR_4->pch.channel);
  FUNC_0(VAR_4);
  VAR_6 |= VAR_2;
     }
     if (VAR_6 == 0) {


  FUNC_5("pcm: int without reason (%x)\n", VAR_5);
  VAR_5 = 0;
     } else VAR_5 &= ~VAR_6;
     FUNC_4(VAR_4, VAR_0, VAR_5);
     VAR_5 = FUNC_3(VAR_4, VAR_0);
     if (VAR_5 != 0) FUNC_5("pcm: int clear failed (%x)\n", VAR_5);
 FUNC_1(VAR_4);
}
