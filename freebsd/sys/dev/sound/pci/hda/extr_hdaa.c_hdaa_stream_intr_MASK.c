
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdaa_devinfo {int num_chans; struct hdaa_chan* chans; } ;
struct hdaa_chan {int flags; scalar_t__ dir; int sid; int c; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 struct hdaa_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (struct hdaa_devinfo*) ;
 int FUNC_3 (struct hdaa_devinfo*) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_3, int VAR_4, int VAR_5)
{
 struct hdaa_devinfo *VAR_6 = FUNC_1(VAR_3);
 struct hdaa_chan *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_6->num_chans; VAR_8++) {
  VAR_7 = &VAR_6->chans[VAR_8];
  if (!(VAR_7->flags & VAR_0))
   continue;
  if (VAR_7->dir == ((VAR_4 == 1) ? VAR_1 : VAR_2) &&
      VAR_7->sid == VAR_5) {
   FUNC_3(VAR_6);
   FUNC_0(VAR_7->c);
   FUNC_2(VAR_6);
  }
 }
}
