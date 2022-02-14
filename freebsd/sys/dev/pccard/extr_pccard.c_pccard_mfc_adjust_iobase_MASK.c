
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct pccard_function {scalar_t__ pf_mfc_iomax; scalar_t__ pf_mfc_iobase; int dev; } ;
typedef scalar_t__ rman_res_t ;
typedef int bus_size_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct pccard_function*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct pccard_function *VAR_5, rman_res_t VAR_6,
    rman_res_t VAR_7, rman_res_t VAR_8)
{
 bus_size_t VAR_9, VAR_10;

 if (VAR_6 != 0) {
  if (VAR_5->pf_mfc_iomax == 0) {
   VAR_5->pf_mfc_iobase = VAR_6 + VAR_7;
   VAR_5->pf_mfc_iomax = VAR_5->pf_mfc_iobase + VAR_8;
  } else {

   if (VAR_5->pf_mfc_iobase > VAR_6 + VAR_7)
    VAR_5->pf_mfc_iobase = VAR_6 + VAR_7;
   if (VAR_5->pf_mfc_iomax < VAR_6 + VAR_7 + VAR_8)
    VAR_5->pf_mfc_iomax = VAR_6 + VAR_7 + VAR_8;
  }
 }

 VAR_10 = VAR_5->pf_mfc_iomax - VAR_5->pf_mfc_iobase;

 for (VAR_9 = 1; VAR_9 < VAR_10; VAR_9 <<= 1)
  ;
 VAR_9--;

 FUNC_0((VAR_5->dev, "MFC: I/O base %#jx IOSIZE %#jx\n",
     (uintmax_t)VAR_5->pf_mfc_iobase, (uintmax_t)(VAR_9 + 1)));
 FUNC_1(VAR_5, VAR_0,
     VAR_5->pf_mfc_iobase & 0xff);
 FUNC_1(VAR_5, VAR_1,
     (VAR_5->pf_mfc_iobase >> 8) & 0xff);
 FUNC_1(VAR_5, VAR_2, 0);
 FUNC_1(VAR_5, VAR_3, 0);
 FUNC_1(VAR_5, VAR_4, VAR_9);
}
