
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_data {int flags; } ;
struct mmc_command {struct mmc_data* data; } ;
struct dwmmc_softc {int buf_map; int buf_tag; int desc_map; int desc_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct dwmmc_softc *VAR_3, struct mmc_command *VAR_4)
{
 struct mmc_data *VAR_5;

 VAR_5 = VAR_4->data;

 if (VAR_5->flags & VAR_2)
  FUNC_0(VAR_3->buf_tag, VAR_3->buf_map,
   VAR_1);
 else
  FUNC_0(VAR_3->buf_tag, VAR_3->buf_map,
   VAR_0);

 FUNC_0(VAR_3->desc_tag, VAR_3->desc_map,
     VAR_1);

 FUNC_1(VAR_3->buf_tag, VAR_3->buf_map);

 return (0);
}
