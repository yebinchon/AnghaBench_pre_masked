
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int volatile uint32_t ;
struct atiixp_info {int dev; } ;
struct atiixp_chinfo {int dt_cur_bit; int blkcnt; int blksz; int volatile ptr; int volatile prevptr; scalar_t__ dir; int buffer; struct atiixp_info* parent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct atiixp_info*,int volatile) ;
 int FUNC_1 (int ,char*,char*,int volatile,...) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static __inline uint32_t
FUNC_3(struct atiixp_chinfo *VAR_2)
{
 struct atiixp_info *VAR_3 = VAR_2->parent;
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7;
 volatile uint32_t VAR_8;

 VAR_4 = VAR_2->dt_cur_bit;
 VAR_5 = FUNC_2(VAR_2->buffer);
 VAR_6 = VAR_2->blkcnt * VAR_2->blksz;
 VAR_7 = VAR_0;

 do {
  VAR_8 = FUNC_0(VAR_3, VAR_4);
  if (VAR_8 < VAR_5)
   continue;
  VAR_8 -= VAR_5;
  if (VAR_8 < VAR_6) {
   return (VAR_8);
  }
 } while (--VAR_7);

 FUNC_1(VAR_3->dev, "PCMDIR_%s: invalid DMA pointer ptr=%u\n",
     (VAR_2->dir == VAR_1) ? "PLAY" : "REC", VAR_8);

 return (0);
}
