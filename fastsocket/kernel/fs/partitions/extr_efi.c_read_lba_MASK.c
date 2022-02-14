
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct block_device {int dummy; } ;
typedef int sector_t ;
typedef int Sector ;


 int FUNC_0 (struct block_device*) ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int ) ;
 unsigned char* FUNC_4 (struct block_device*,int ,int *) ;

__attribute__((used)) static size_t
FUNC_5(struct block_device *VAR_0, u64 VAR_1, u8 * VAR_2, size_t VAR_3)
{
 size_t VAR_4 = 0;
 sector_t VAR_5 = VAR_1 * (FUNC_0(VAR_0) / 512);

 if (!VAR_0 || !VAR_2 || VAR_1 > FUNC_1(VAR_0))
                return 0;

 while (VAR_3) {
  int VAR_6 = 512;
  Sector VAR_7;
  unsigned char *VAR_8 = FUNC_4(VAR_0, VAR_5++, &VAR_7);
  if (!VAR_8)
   break;
  if (VAR_6 > VAR_3)
   VAR_6 = VAR_3;
  FUNC_2(VAR_2, VAR_8, VAR_6);
  FUNC_3(VAR_7);
  VAR_2 += VAR_6;
  VAR_4 +=VAR_6;
  VAR_3 -= VAR_6;
 }
 return VAR_4;
}
