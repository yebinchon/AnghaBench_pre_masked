
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {void* io_type; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 scalar_t__ FUNC_0 (struct hdsp*,int ,int ) ;
 int FUNC_1 (struct hdsp*,int ) ;
 int FUNC_2 (struct hdsp*,int ,int ) ;

__attribute__((used)) static int FUNC_3 (struct hdsp *VAR_13)
{
 if ((FUNC_1 (VAR_13, VAR_10) & VAR_2) != 0) {

  FUNC_2 (VAR_13, VAR_7, VAR_3);
  FUNC_2 (VAR_13, VAR_8, 0);
  if (FUNC_0 (VAR_13, 0, VAR_4) < 0)
   return -VAR_1;

  FUNC_2 (VAR_13, VAR_7, VAR_5);
  FUNC_2 (VAR_13, VAR_8, 0);

  if (FUNC_0 (VAR_13, 0, VAR_4)) {
   VAR_13->io_type = VAR_12;
   FUNC_2 (VAR_13, VAR_7, VAR_6);
   FUNC_2 (VAR_13, VAR_7, VAR_5);
   FUNC_0 (VAR_13, 0, VAR_4);
  } else {
   VAR_13->io_type = VAR_0;
  }
 } else {

  if (FUNC_1(VAR_13, VAR_9) & VAR_11)
   VAR_13->io_type = VAR_12;
  else
   VAR_13->io_type = VAR_0;
 }
 return 0;
}
