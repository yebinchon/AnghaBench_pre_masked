
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct ecore_hwfn {int p_dev; } ;
struct ecore_bmap {unsigned long* bitmap; int max_count; int name; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int,...) ;
 int FUNC_1 (unsigned long*,int) ;
 int FUNC_2 (int ,unsigned long*) ;
 unsigned long* VAR_0 ;
 int FUNC_3 (int *,char*,unsigned long long) ;

void FUNC_4(struct ecore_hwfn *VAR_1,
     struct ecore_bmap *VAR_2,
     bool VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 u64 *VAR_9;

 if (!VAR_2 || !VAR_2->bitmap)
  return;

 if (!VAR_3)
  goto end;

 VAR_4 = FUNC_1(VAR_2->bitmap, VAR_2->max_count);
 if (!VAR_4)
  goto end;

 FUNC_0(VAR_1, 0,
    "%s bitmap not free - size=%d, weight=%d, 512 bits per line\n",
    VAR_2->name, VAR_2->max_count, VAR_4);

 VAR_9 = (u64 *)VAR_2->bitmap;
 VAR_7 = VAR_2->max_count / (64*8);
 VAR_8 = VAR_7 * 8 + (((VAR_2->max_count % (64*8)) + 63) / 64);


 for (VAR_6 = 0, VAR_5 = 0; VAR_5 < VAR_7; VAR_5++, VAR_6 += 8) {
  if (FUNC_1((unsigned long *)&VAR_9[VAR_6], 64*8))
   FUNC_0(VAR_1, 0,
      "line 0x%04x: 0x%016llx 0x%016llx 0x%016llx 0x%016llx 0x%016llx 0x%016llx 0x%016llx 0x%016llx\n",
      VAR_5, (unsigned long long)VAR_9[VAR_6],
    (unsigned long long)VAR_9[VAR_6+1],
    (unsigned long long)VAR_9[VAR_6+2],
      (unsigned long long)VAR_9[VAR_6+3],
    (unsigned long long)VAR_9[VAR_6+4],
    (unsigned long long)VAR_9[VAR_6+5],
      (unsigned long long)VAR_9[VAR_6+6],
    (unsigned long long)VAR_9[VAR_6+7]);
 }


 if ((VAR_2->max_count % (64*8)) &&
     (FUNC_1((unsigned long *)&VAR_9[VAR_6],
    VAR_2->max_count-VAR_6*64))) {
  u8 VAR_10[200] = { 0 };
  int VAR_11;

  VAR_11 = FUNC_3(VAR_10, "line 0x%04x: ", VAR_5);
  for (; VAR_6 < VAR_8; VAR_6++) {
   VAR_11 += FUNC_3(VAR_10+VAR_11,
            "0x%016llx ",
    (unsigned long long)VAR_9[VAR_6]);
  }
  FUNC_0(VAR_1, 0, "%s\n", VAR_10);
 }

end:
 FUNC_2(VAR_1->p_dev, VAR_2->bitmap);
 VAR_2->bitmap = VAR_0;
}
