
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct zip {scalar_t__ entry_encryption; size_t written_bytes; size_t entry_compressed_written; int cctx; int hctx; } ;
struct archive_write {int archive; struct zip* format_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (struct archive_write*) ;
 int FUNC_1 (struct archive_write*,int *,size_t) ;
 int FUNC_2 (int *,int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,size_t) ;
 int FUNC_5 (char const*,int ,int *,size_t,int,int *,size_t) ;
 int FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static int
FUNC_9(struct archive_write *VAR_6)
{
 struct zip *VAR_7 = VAR_6->format_data;
 const char *VAR_8;
 size_t VAR_9, VAR_10;
 uint8_t VAR_11[16 + 2];
 uint8_t VAR_12[VAR_5];
 int VAR_13;

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_8 == ((void*)0)) {
  FUNC_7(&VAR_6->archive, VAR_0,
      "Encryption needs passphrase");
  return (VAR_1);
 }
 if (VAR_7->entry_encryption == VAR_4) {
  VAR_10 = 8;
  VAR_9 = 16;
 } else {

  VAR_10 = 16;
  VAR_9 = 32;
 }
 if (FUNC_6(VAR_11, VAR_10) != VAR_3) {
  FUNC_7(&VAR_6->archive, VAR_0,
      "Can't generate random number for encryption");
  return (VAR_2);
 }
 FUNC_5(VAR_8, FUNC_8(VAR_8),
     VAR_11, VAR_10, 1000, VAR_12, VAR_9 * 2 + 2);

 VAR_13 = FUNC_2(&VAR_7->cctx, VAR_12, VAR_9);
 if (VAR_13 != 0) {
  FUNC_7(&VAR_6->archive, VAR_0,
      "Decryption is unsupported due to lack of crypto library");
  return (VAR_1);
 }
 VAR_13 = FUNC_4(&VAR_7->hctx, VAR_12 + VAR_9,
     VAR_9);
 if (VAR_13 != 0) {
  FUNC_3(&VAR_7->cctx);
  FUNC_7(&VAR_6->archive, VAR_0,
      "Failed to initialize HMAC-SHA1");
  return (VAR_1);
        }


 VAR_11[VAR_10] = VAR_12[VAR_9 * 2];
 VAR_11[VAR_10 + 1] = VAR_12[VAR_9 * 2 + 1];


 VAR_13 = FUNC_1(VAR_6, VAR_11, VAR_10 + 2);
 if (VAR_13 != VAR_3)
  return (VAR_13);
 VAR_7->written_bytes += VAR_10 + 2;
 VAR_7->entry_compressed_written += VAR_10 + 2;

 return (VAR_3);
}
