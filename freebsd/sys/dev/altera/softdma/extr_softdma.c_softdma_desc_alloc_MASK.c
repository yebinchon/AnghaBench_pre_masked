
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct xdma_channel {scalar_t__ chan; } ;
struct softdma_desc {int dummy; } ;
struct softdma_channel {int descs_num; int descs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct xdma_channel *VAR_3)
{
 struct softdma_channel *VAR_4;
 uint32_t VAR_5;

 VAR_4 = (struct softdma_channel *)VAR_3->chan;

 VAR_5 = VAR_4->descs_num;

 VAR_4->descs = FUNC_0(VAR_5 * sizeof(struct softdma_desc),
     VAR_0, (VAR_1 | VAR_2));

 return (0);
}
