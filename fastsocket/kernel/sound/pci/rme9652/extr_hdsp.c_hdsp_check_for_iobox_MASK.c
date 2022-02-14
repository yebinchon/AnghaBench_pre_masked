
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {scalar_t__ io_type; int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct hdsp*,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2 (struct hdsp *VAR_6)
{
 if (VAR_6->io_type == VAR_2 || VAR_6->io_type == VAR_1) return 0;
 if (FUNC_0 (VAR_6, VAR_5) & VAR_3) {
  FUNC_1 ("Hammerfall-DSP: no Digiface or Multiface connected!\n");
  VAR_6->state &= ~VAR_4;
  return -VAR_0;
 }
 return 0;
}
