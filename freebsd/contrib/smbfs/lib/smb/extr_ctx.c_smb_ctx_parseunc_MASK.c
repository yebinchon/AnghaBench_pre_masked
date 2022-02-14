
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct smb_ctx {scalar_t__ ct_maxlevel; scalar_t__ ct_minlevel; scalar_t__ ct_parsedlevel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,char,char*,int,char const**) ;
 int FUNC_2 (struct smb_ctx*,int ) ;
 int FUNC_3 (struct smb_ctx*,char*) ;
 int FUNC_4 (struct smb_ctx*,char*,int) ;
 int FUNC_5 (struct smb_ctx*,int ) ;
 int FUNC_6 (struct smb_ctx*,char*) ;
 int FUNC_7 (char*,int ) ;
 char* FUNC_8 (char*,char) ;

int
FUNC_9(struct smb_ctx *VAR_5, const char *VAR_6, int VAR_7,
 const char **VAR_8)
{
 const char *VAR_9 = VAR_6;
 char *VAR_10, *VAR_11, *VAR_12;
 char VAR_13[1024];
 int VAR_14 ;

 VAR_5->ct_parsedlevel = VAR_1;
 if (*VAR_9++ != '/' || *VAR_9++ != '/') {
  FUNC_7("UNC should start with '//'", 0);
  return VAR_0;
 }
 VAR_10 = VAR_13;
 VAR_14 = FUNC_1(VAR_9, '@', VAR_10, sizeof(VAR_13), &VAR_9);
 if (!VAR_14) {
  if (VAR_5->ct_maxlevel < VAR_3) {
   FUNC_7("no user name required", 0);
   return VAR_0;
  }
  VAR_14 = FUNC_6(VAR_5, VAR_13);
  if (VAR_14)
   return VAR_14;
  VAR_5->ct_parsedlevel = VAR_3;
 }
 VAR_14 = FUNC_1(VAR_9, '/', VAR_10, sizeof(VAR_13), &VAR_9);
 if (VAR_14) {
  VAR_14 = FUNC_1(VAR_9, '\0', VAR_10, sizeof(VAR_13), &VAR_9);
  if (VAR_14) {
   FUNC_7("no server name found", 0);
   return VAR_14;
  }
 }
 if (*VAR_10 == 0) {
  FUNC_7("empty server name", 0);
  return VAR_0;
 }



 VAR_11 = FUNC_8(VAR_13, ':');
 if (VAR_11) {
  *VAR_11++ = '\0';
  VAR_12 = FUNC_8(VAR_11, ':');
  if (VAR_12) {
   *VAR_12++ = '\0';
   VAR_14 = FUNC_2(VAR_5, FUNC_0(VAR_12));
   if (VAR_14) {
    FUNC_7("Invalid NetBIOS port number", 0);
    return VAR_14;
   }
  }
  VAR_14 = FUNC_5(VAR_5, FUNC_0(VAR_11));
  if (VAR_14) {
   FUNC_7("Invalid SMB port number", 0);
   return VAR_14;
  }
 }
 VAR_14 = FUNC_3(VAR_5, VAR_13);
 if (VAR_14)
  return VAR_14;
 if (VAR_7 == VAR_4) {
  *VAR_8 = VAR_9;
  return 0;
 }
 if (*VAR_9 != 0 && VAR_5->ct_maxlevel < VAR_2) {
  FUNC_7("no share name required", 0);
  return VAR_0;
 }
 VAR_14 = FUNC_1(VAR_9, '/', VAR_10, sizeof(VAR_13), &VAR_9);
 if (VAR_14) {
  VAR_14 = FUNC_1(VAR_9, '\0', VAR_10, sizeof(VAR_13), &VAR_9);
  if (VAR_14) {
   FUNC_7("unexpected end of line", 0);
   return VAR_14;
  }
 }
 if (*VAR_10 == 0 && VAR_5->ct_minlevel >= VAR_2) {
  FUNC_7("empty share name", 0);
  return VAR_0;
 }
 *VAR_8 = VAR_9;
 if (*VAR_10 == 0)
  return 0;
 VAR_14 = FUNC_4(VAR_5, VAR_10, VAR_7);
 return VAR_14;
}
