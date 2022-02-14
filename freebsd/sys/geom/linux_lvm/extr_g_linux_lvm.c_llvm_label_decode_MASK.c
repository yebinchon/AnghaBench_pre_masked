
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_char ;
struct g_llvm_label {int ll_sector; int ll_offset; char* ll_uuid; scalar_t__ ll_pestart; scalar_t__ ll_size; void* ll_crc; scalar_t__ ll_md_size; scalar_t__ ll_md_offset; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (char*,int const*,int) ;
 int FUNC_2 (int const*,char*,int) ;
 void* FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;

__attribute__((used)) static int
FUNC_5(const u_char *VAR_1, struct g_llvm_label *VAR_2, int VAR_3)
{
 uint64_t VAR_4;
 char *VAR_5;


 if (FUNC_1("LABELONE", VAR_1 , 8) != 0)
  return (VAR_0);


 if (FUNC_1("LVM2 001", VAR_1 + 24, 8) != 0) {
  FUNC_0(0, "Unsupported LVM format");
  return (VAR_0);
 }

 VAR_2->ll_sector = FUNC_4(VAR_1 + 8);
 VAR_2->ll_crc = FUNC_3(VAR_1 + 16);
 VAR_2->ll_offset = FUNC_3(VAR_1 + 20);

 if (VAR_2->ll_sector != VAR_3) {
  FUNC_0(0, "Expected sector %ju, found at %d",
      VAR_2->ll_sector, VAR_3);
  return (VAR_0);
 }

 VAR_4 = VAR_2->ll_offset;




 VAR_5 = VAR_2->ll_uuid;
 FUNC_2(VAR_1 + VAR_4, VAR_5, 6);
 VAR_4 += 6;
 VAR_5 += 6;
 *VAR_5++ = '-';
 for (int VAR_6 = 0; VAR_6 < 5; VAR_6++) {
  FUNC_2(VAR_1 + VAR_4, VAR_5, 4);
  VAR_4 += 4;
  VAR_5 += 4;
  *VAR_5++ = '-';
 }
 FUNC_2(VAR_1 + VAR_4, VAR_5, 6);
 VAR_4 += 6;
 VAR_5 += 6;
 *VAR_5++ = '\0';

 VAR_2->ll_size = FUNC_4(VAR_1 + VAR_4);
 VAR_4 += 8;
 VAR_2->ll_pestart = FUNC_4(VAR_1 + VAR_4);
 VAR_4 += 16;


 if (FUNC_4(VAR_1 + VAR_4) != 0) {
  FUNC_0(0, "Only one data section supported");
  return (VAR_0);
 }

 VAR_4 += 16;
 VAR_2->ll_md_offset = FUNC_4(VAR_1 + VAR_4);
 VAR_4 += 8;
 VAR_2->ll_md_size = FUNC_4(VAR_1 + VAR_4);
 VAR_4 += 8;

 FUNC_0(1, "LVM metadata: offset=%ju, size=%ju", VAR_2->ll_md_offset,
     VAR_2->ll_md_size);


 if (FUNC_4(VAR_1 + VAR_4) != 0) {
  FUNC_0(0, "Only one metadata section supported");
  return (VAR_0);
 }

 FUNC_0(2, "label uuid=%s", VAR_2->ll_uuid);
 FUNC_0(2, "sector=%ju, crc=%u, offset=%u, size=%ju, pestart=%ju",
     VAR_2->ll_sector, VAR_2->ll_crc, VAR_2->ll_offset, VAR_2->ll_size,
     VAR_2->ll_pestart);

 return (0);
}
