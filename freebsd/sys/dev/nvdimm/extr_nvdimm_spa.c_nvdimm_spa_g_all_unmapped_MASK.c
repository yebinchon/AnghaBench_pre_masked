
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vm_page* vm_page_t ;
typedef int vm_memattr_t ;
struct vm_page {int dummy; } ;
struct nvdimm_spa_dev {scalar_t__ spa_phys_base; int spa_memattr; } ;
struct bio {int bio_ma_n; int bio_offset; int bio_ma_offset; int bio_length; struct vm_page** bio_ma; } ;
typedef int maa ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm_page*,int) ;
 int FUNC_1 (struct vm_page**) ;
 int FUNC_2 (struct vm_page**,int,struct vm_page**,int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct vm_page*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(struct nvdimm_spa_dev *VAR_3, struct bio *VAR_4, int VAR_5)
{
 struct vm_page VAR_6[VAR_4->bio_ma_n];
 vm_page_t VAR_7[VAR_4->bio_ma_n];
 vm_memattr_t VAR_8;
 int VAR_9;

 VAR_8 = VAR_3->spa_memattr;
 for (VAR_9 = 0; VAR_9 < FUNC_1(VAR_7); VAR_9++) {
  FUNC_0(&VAR_6[VAR_9], sizeof(VAR_6[VAR_9]));
  FUNC_4(&VAR_6[VAR_9], VAR_3->spa_phys_base +
      FUNC_3(VAR_4->bio_offset) + VAR_2 * VAR_9, VAR_8);
  VAR_7[VAR_9] = &VAR_6[VAR_9];
 }
 if (VAR_5 == VAR_0)
  FUNC_2(VAR_7, VAR_4->bio_offset & VAR_1, VAR_4->bio_ma,
      VAR_4->bio_ma_offset, VAR_4->bio_length);
 else
  FUNC_2(VAR_4->bio_ma, VAR_4->bio_ma_offset, VAR_7,
      VAR_4->bio_offset & VAR_1, VAR_4->bio_length);
}
