
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct zip {int written_bytes; int entry_compressed_written; int tctx; int trad_chkdat; } ;
struct archive_write {int archive; struct zip* format_data; } ;
typedef int key ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct archive_write*) ;
 int FUNC_1 (struct archive_write*,int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,int *,int,int *,int) ;
 int FUNC_6 (int *,char const*,int ) ;

__attribute__((used)) static int
FUNC_7(struct archive_write *VAR_5)
{
 struct zip *VAR_6 = VAR_5->format_data;
 const char *VAR_7;
 uint8_t VAR_8[VAR_4];
 uint8_t VAR_9[VAR_4];
 int VAR_10;

 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(&VAR_5->archive, VAR_0,
      "Encryption needs passphrase");
  return VAR_1;
 }
 if (FUNC_2(VAR_8, sizeof(VAR_8)-1) != VAR_3) {
  FUNC_3(&VAR_5->archive, VAR_0,
      "Can't generate random number for encryption");
  return VAR_2;
 }
 FUNC_6(&VAR_6->tctx, VAR_7, FUNC_4(VAR_7));


 VAR_8[VAR_4-1] = VAR_6->trad_chkdat;
 FUNC_5(&VAR_6->tctx, VAR_8, VAR_4,
     VAR_9, VAR_4);

 VAR_10 = FUNC_1(VAR_5, VAR_9, VAR_4);
 if (VAR_10 != VAR_3)
  return (VAR_10);
 VAR_6->written_bytes += VAR_4;
 VAR_6->entry_compressed_written += VAR_4;
 return (VAR_10);
}
