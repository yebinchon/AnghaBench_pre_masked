
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pccard_io_handle {int addr; int size; size_t width; } ;
struct io_map_index_st {int stop_lsb; int stop_msb; int start_lsb; int start_msb; int ioenable; int * ioctlbits; int ioctlmask; } ;
struct exca_softc {struct pccard_io_handle* io; } ;


 int FUNC_0 (char*,int,int,int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct exca_softc*,int ,int ) ;
 int FUNC_2 (struct exca_softc*,int ) ;
 int FUNC_3 (struct exca_softc*,int ,int) ;
 int FUNC_4 (struct exca_softc*,int ,int ) ;
 struct io_map_index_st* VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct exca_softc *VAR_3, int VAR_4)
{
 struct io_map_index_st *VAR_5;

 struct pccard_io_handle *VAR_6;

 VAR_5 = &VAR_2[VAR_4];
 VAR_6 = &VAR_3->io[VAR_4];
 FUNC_3(VAR_3, VAR_5->start_lsb, VAR_6->addr & 0xff);
 FUNC_3(VAR_3, VAR_5->start_msb, (VAR_6->addr >> 8) & 0xff);

 FUNC_3(VAR_3, VAR_5->stop_lsb, (VAR_6->addr + VAR_6->size - 1) & 0xff);
 FUNC_3(VAR_3, VAR_5->stop_msb, ((VAR_6->addr + VAR_6->size - 1) >> 8) & 0xff);

 FUNC_1(VAR_3, VAR_1, VAR_5->ioctlmask);
 FUNC_4(VAR_3, VAR_1, VAR_5->ioctlbits[VAR_6->width]);

 FUNC_4(VAR_3, VAR_0, VAR_5->ioenable);
}
