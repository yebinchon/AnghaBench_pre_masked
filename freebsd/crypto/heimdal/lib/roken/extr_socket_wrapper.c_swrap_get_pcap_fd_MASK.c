
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swrap_file_hdr {int magic; int version_major; int version_minor; int timezone; int sigfigs; int link_type; int frame_max_len; } ;
typedef int file_hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,int,int) ;
 int FUNC_1 (int,struct swrap_file_hdr*,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_5)
{
 static int VAR_6 = -1;

 if (VAR_6 != -1) return VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_3|VAR_1|VAR_2|VAR_0, 0644);
 if (VAR_6 != -1) {
  struct swrap_file_hdr VAR_7;
  VAR_7.magic = 0xA1B2C3D4;
  VAR_7.version_major = 0x0002;
  VAR_7.version_minor = 0x0004;
  VAR_7.timezone = 0x00000000;
  VAR_7.sigfigs = 0x00000000;
  VAR_7.frame_max_len = VAR_4;
  VAR_7.link_type = 0x0065;

  FUNC_1(VAR_6, &VAR_7, sizeof(VAR_7));
  return VAR_6;
 }

 VAR_6 = FUNC_0(VAR_5, VAR_3|VAR_0, 0644);

 return VAR_6;
}
