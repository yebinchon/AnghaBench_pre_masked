
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct privhead {int ver_major; int ver_minor; scalar_t__ logical_disk_start; scalar_t__ logical_disk_size; scalar_t__ config_start; scalar_t__ config_size; int disk_id; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,scalar_t__,unsigned long long) ;
 int FUNC_6 (int const*,int ) ;

__attribute__((used)) static bool FUNC_7(const u8 *VAR_2, struct privhead *VAR_3)
{
 bool VAR_4 = 0;

 FUNC_0(!VAR_2 || !VAR_3);
 if (VAR_1 != FUNC_2(VAR_2)) {
  FUNC_4("Cannot find PRIVHEAD structure. LDM database is"
   " corrupt. Aborting.");
  return 0;
 }
 VAR_3->ver_major = FUNC_1(VAR_2 + 0x000C);
 VAR_3->ver_minor = FUNC_1(VAR_2 + 0x000E);
 VAR_3->logical_disk_start = FUNC_2(VAR_2 + 0x011B);
 VAR_3->logical_disk_size = FUNC_2(VAR_2 + 0x0123);
 VAR_3->config_start = FUNC_2(VAR_2 + 0x012B);
 VAR_3->config_size = FUNC_2(VAR_2 + 0x0133);

 if (VAR_3->ver_major == 2 && VAR_3->ver_minor == 12)
  VAR_4 = 1;
 if (!VAR_4 && (VAR_3->ver_major != 2 || VAR_3->ver_minor != 11)) {
  FUNC_4("Expected PRIVHEAD version 2.11 or 2.12, got %d.%d."
   " Aborting.", VAR_3->ver_major, VAR_3->ver_minor);
  return 0;
 }
 FUNC_3("PRIVHEAD version %d.%d (Windows %s).", VAR_3->ver_major,
   VAR_3->ver_minor, VAR_4 ? "Vista" : "2000/XP");
 if (VAR_3->config_size != VAR_0) {

  FUNC_5("Database is normally %u bytes, it claims to "
   "be %llu bytes.", VAR_0,
   (unsigned long long)VAR_3->config_size);
 }
 if ((VAR_3->logical_disk_size == 0) || (VAR_3->logical_disk_start +
   VAR_3->logical_disk_size > VAR_3->config_start)) {
  FUNC_4("PRIVHEAD disk size doesn't match real disk size");
  return 0;
 }
 if (!FUNC_6(VAR_2 + 0x0030, VAR_3->disk_id)) {
  FUNC_4("PRIVHEAD contains an invalid GUID.");
  return 0;
 }
 FUNC_3("Parsed PRIVHEAD successfully.");
 return 1;
}
