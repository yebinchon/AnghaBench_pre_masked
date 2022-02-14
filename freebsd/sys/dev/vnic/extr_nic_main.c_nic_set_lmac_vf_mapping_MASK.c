
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct nicpf {int flags; scalar_t__ num_vf_en; int * vf_lmac_map; int node; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int) ;
 int VAR_5 ;
 int FUNC_1 (int ,int) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct nicpf*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_4(struct nicpf *VAR_6)
{
 unsigned VAR_7 = FUNC_2(VAR_6->node);
 int VAR_8, VAR_9 = 0;
 int VAR_10, VAR_11 = 0;
 uint64_t VAR_12;

 VAR_6->num_vf_en = 0;
 if (VAR_6->flags & VAR_5) {
  VAR_6->num_vf_en = VAR_0;
  return;
 }

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  if ((VAR_7 & (1 << VAR_8)) == 0)
   continue;
  VAR_11 = FUNC_1(VAR_6->node, VAR_8);
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
   VAR_6->vf_lmac_map[VAR_9++] =
      FUNC_0(VAR_8, VAR_10);
  VAR_6->num_vf_en += VAR_11;


  VAR_12 = (1UL << 1);
  VAR_12 |= (0x1ff << 2);

  VAR_12 |= (((((48 * 1024) / VAR_11) -
      VAR_2) / 16) << 12);
  VAR_10 = VAR_8 * VAR_1;
  for (; VAR_10 < VAR_11 + (VAR_8 * VAR_1); VAR_10++) {
   FUNC_3(VAR_6, VAR_4 + (VAR_10 * 8),
       VAR_12);
  }
 }
}
