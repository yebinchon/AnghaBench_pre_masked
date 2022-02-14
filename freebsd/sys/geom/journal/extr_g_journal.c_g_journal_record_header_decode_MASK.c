
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
typedef int u_char ;
struct g_journal_record_header {scalar_t__ jrh_nentries; struct g_journal_entry* jrh_entries; int jrh_sum; int jrh_journal_id; int jrh_magic; } ;
struct g_journal_entry {void* je_length; void* je_offset; void* je_joffset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int const*,int ,int) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 void* FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(const u_char *VAR_3,
    struct g_journal_record_header *VAR_4)
{
 struct g_journal_entry *VAR_5;
 u_int VAR_6;

 FUNC_0(VAR_3, VAR_4->jrh_magic, sizeof(VAR_4->jrh_magic));
 VAR_3 += sizeof(VAR_4->jrh_magic);
 if (FUNC_4(VAR_4->jrh_magic, VAR_1) != 0)
  return (VAR_0);
 VAR_4->jrh_journal_id = FUNC_2(VAR_3);
 VAR_3 += 8;
 VAR_4->jrh_nentries = FUNC_1(VAR_3);
 VAR_3 += 2;
 if (VAR_4->jrh_nentries > VAR_2)
  return (VAR_0);
 FUNC_0(VAR_3, VAR_4->jrh_sum, sizeof(VAR_4->jrh_sum));
 VAR_3 += 8;
 for (VAR_6 = 0; VAR_6 < VAR_4->jrh_nentries; VAR_6++) {
  VAR_5 = &VAR_4->jrh_entries[VAR_6];
  VAR_5->je_joffset = FUNC_3(VAR_3);
  VAR_3 += 8;
  VAR_5->je_offset = FUNC_3(VAR_3);
  VAR_3 += 8;
  VAR_5->je_length = FUNC_3(VAR_3);
  VAR_3 += 8;
 }
 return (0);
}
