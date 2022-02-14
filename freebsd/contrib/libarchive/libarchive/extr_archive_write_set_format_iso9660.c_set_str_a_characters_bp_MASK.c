
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {int dummy; } ;
typedef enum vdc { ____Placeholder_vdc } vdc ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned char*,char const*,int,int,int ) ;
 int FUNC_1 (struct archive_write*,unsigned char*,char const*,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct archive_write *VAR_4, unsigned char *VAR_5,
    int VAR_6, int VAR_7, const char *VAR_8, enum vdc VAR_9)
{
 int VAR_10;

 switch (VAR_9) {
 case 130:
  FUNC_0(VAR_5+VAR_6, VAR_8, VAR_7 - VAR_6 + 1, 0x20,
      VAR_3);
  VAR_10 = VAR_1;
  break;
 case 131:
  FUNC_0(VAR_5+VAR_6, VAR_8, VAR_7 - VAR_6 + 1, 0x20,
      VAR_2);
  VAR_10 = VAR_1;
  break;
 case 129:
 case 128:
  VAR_10 = FUNC_1(VAR_4, VAR_5+VAR_6, VAR_8, VAR_7 - VAR_6 + 1,
      0x0020, VAR_9);
  break;
 default:
  VAR_10 = VAR_0;
 }
 return (VAR_10);
}
