
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mmc_data {int flags; int xfer_len; int len; scalar_t__ data; } ;
struct mmc_command {struct mmc_data* data; } ;
struct dwmmc_softc {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 void* FUNC_1 (struct dwmmc_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct dwmmc_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct dwmmc_softc *VAR_6, struct mmc_command *VAR_7)
{
 struct mmc_data *VAR_8;
 uint32_t *VAR_9, VAR_10;

 if (VAR_7 == ((void*)0) || VAR_7->data == ((void*)0))
  return;

 VAR_8 = VAR_7->data;
 if ((VAR_8->flags & VAR_0) == 0)
  return;

 FUNC_0((VAR_8->xfer_len & 3) == 0, ("xfer_len not aligned"));
 VAR_9 = (uint32_t *)VAR_8->data + (VAR_8->xfer_len >> 2);

 while (VAR_8->xfer_len < VAR_8->len) {
  VAR_10 = FUNC_1(VAR_6, VAR_4);
  if (VAR_10 & VAR_5)
   break;
  *VAR_9++ = FUNC_1(VAR_6, VAR_1);
  VAR_8->xfer_len += 4;
 }

 FUNC_2(VAR_6, VAR_3, VAR_2);
}
