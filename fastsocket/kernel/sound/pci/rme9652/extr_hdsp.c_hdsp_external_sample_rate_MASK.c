
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {scalar_t__ io_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;






 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (struct hdsp*) ;
 unsigned int FUNC_1 (struct hdsp*,int ) ;
 int FUNC_2 (struct hdsp*) ;

__attribute__((used)) static int FUNC_3(struct hdsp *VAR_4)
{
 unsigned int VAR_5 = FUNC_1(VAR_4, VAR_2);
 unsigned int VAR_6 = VAR_5 & VAR_3;





 if (VAR_4->io_type == VAR_0 &&
     FUNC_0(VAR_4) == VAR_1)
   return FUNC_2(VAR_4);

 switch (VAR_6) {
 case 133: return 32000;
 case 132: return 44100;
 case 131: return 48000;
 case 130: return 64000;
 case 129: return 88200;
 case 128: return 96000;
 default:
  return 0;
 }
}
