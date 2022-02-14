
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct seq_file {int dummy; } ;
struct kmemleak_object {int size; scalar_t__ pointer; } ;
typedef int linebuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,int,int,int ,unsigned char*,int,int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct seq_file*,char*,...) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_4,
       struct kmemleak_object *VAR_5)
{
 const u8 *VAR_6 = (const u8 *)VAR_5->pointer;
 int VAR_7, VAR_8, VAR_9;
 unsigned char VAR_10[VAR_3 * 5];


 VAR_9 = VAR_8 =
  FUNC_1(VAR_5->size, (size_t)(VAR_2 * VAR_3));

 FUNC_2(VAR_4, "  hex dump (first %d bytes):\n", VAR_8);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7 += VAR_3) {
  int VAR_11 = FUNC_1(VAR_9, VAR_3);

  VAR_9 -= VAR_3;
  FUNC_0(VAR_6 + VAR_7, VAR_11, VAR_3,
       VAR_1, VAR_10, sizeof(VAR_10),
       VAR_0);
  FUNC_2(VAR_4, "    %s\n", VAR_10);
 }
}
