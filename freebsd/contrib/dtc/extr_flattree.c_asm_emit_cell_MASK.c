
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cell_t ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, cell_t VAR_1)
{
 FILE *VAR_2 = VAR_0;

 FUNC_0(VAR_2, "\t.byte 0x%02x; .byte 0x%02x; .byte 0x%02x; .byte 0x%02x\n",
  (VAR_1 >> 24) & 0xff, (VAR_1 >> 16) & 0xff,
  (VAR_1 >> 8) & 0xff, VAR_1 & 0xff);
}
