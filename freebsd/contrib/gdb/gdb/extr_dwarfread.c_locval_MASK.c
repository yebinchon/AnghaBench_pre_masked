
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dieinfo {char* at_location; int isreg; int offreg; int optimized_out; void* basereg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_0 (void*) ;
 int VAR_3 ;
 int VAR_4 ;







 int VAR_5 ;
 int FUNC_1 (int ) ;
 unsigned short FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int ,int ,long) ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_4 (char*,int,int ,int ) ;

__attribute__((used)) static int
FUNC_5 (struct dieinfo *VAR_8)
{
  unsigned short VAR_9;
  unsigned short VAR_10;
  auto long VAR_11[64];
  int VAR_12;
  char *VAR_13;
  char *VAR_14;
  int VAR_15;
  int VAR_16;

  VAR_13 = VAR_8->at_location;
  VAR_9 = FUNC_2 (VAR_0);
  VAR_10 = FUNC_4 (VAR_13, VAR_9, VAR_4, VAR_6);
  VAR_13 += VAR_9;
  VAR_14 = VAR_13 + VAR_10;
  VAR_12 = 0;
  VAR_11[VAR_12] = 0;
  VAR_8->isreg = 0;
  VAR_8->offreg = 0;
  VAR_8->optimized_out = 1;
  VAR_16 = FUNC_1 (VAR_6);
  while (VAR_13 < VAR_14)
    {
      VAR_8->optimized_out = 0;
      VAR_15 = FUNC_4 (VAR_13, VAR_5, VAR_4,
          VAR_6);
      VAR_13 += VAR_5;
      switch (VAR_15)
 {
 case 0:

   VAR_13 = VAR_14;
   break;
 case 128:

   VAR_11[++VAR_12]
     = FUNC_0 (FUNC_4 (VAR_13, VAR_16,
         VAR_4,
         VAR_6));
   VAR_13 += VAR_16;
   VAR_8->isreg = 1;
   break;
 case 132:



   VAR_8->offreg = 1;
   VAR_8->basereg = FUNC_4 (VAR_13, VAR_16, VAR_4,
      VAR_6);
   VAR_13 += VAR_16;
   VAR_11[++VAR_12] = 0;
   break;
 case 133:

   VAR_11[++VAR_12] = FUNC_4 (VAR_13, VAR_16,
         VAR_4, VAR_6);
   VAR_13 += VAR_16;
   break;
 case 131:

   VAR_11[++VAR_12] = FUNC_4 (VAR_13, VAR_16,
         VAR_3, VAR_6);
   VAR_13 += VAR_16;
   break;
 case 130:

   FUNC_3 (&VAR_7,
       "DIE @ 0x%x \"%s\", OP_DEREF2 address 0x%lx not handled",
       VAR_1, VAR_2, VAR_11[VAR_12]);
   break;
 case 129:
   FUNC_3 (&VAR_7,
       "DIE @ 0x%x \"%s\", OP_DEREF4 address 0x%lx not handled",
       VAR_1, VAR_2, VAR_11[VAR_12]);
   break;
 case 134:
   VAR_11[VAR_12 - 1] += VAR_11[VAR_12];
   VAR_12--;
   break;
 }
    }
  return (VAR_11[VAR_12]);
}
