
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_paddr_t ;
typedef char* uintmax_t ;
typedef size_t uint64_t ;
typedef size_t u_int ;
struct dumperinfo {size_t maxiosize; } ;
struct dump_pa {size_t pa_size; size_t pa_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (size_t) ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (struct dumperinfo*,void*,int ,size_t) ;
 int FUNC_3 (size_t,size_t,void**) ;
 int FUNC_4 (size_t,size_t,void*) ;
 int FUNC_5 () ;
 size_t FUNC_6 (size_t,int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct dump_pa *VAR_5, int VAR_6, void *VAR_7)
{
 struct dumperinfo *VAR_8 = (struct dumperinfo*)VAR_7;
 vm_paddr_t VAR_9;
 void *VAR_10;
 uint64_t VAR_11;
 size_t VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;
 u_int VAR_17;

 VAR_16 = 0;
 VAR_12 = 0;
 VAR_10 = ((void*)0);
 VAR_11 = VAR_5->pa_size / VAR_3;
 VAR_9 = VAR_5->pa_start;
 VAR_17 = FUNC_6(VAR_8->maxiosize / VAR_3, VAR_1);
 if (VAR_17 == 0)
  VAR_17 = 1;

 FUNC_7("  chunk %d: %juMB (%ju pages)", VAR_6, (uintmax_t)FUNC_0(VAR_11),
     (uintmax_t)VAR_11);

 FUNC_5();
 while (VAR_11) {
  VAR_14 = VAR_11;
  if (VAR_14 > VAR_17)
   VAR_14 = VAR_17;
  VAR_13 = VAR_14 << VAR_2;
  VAR_12 += VAR_13;
  if (VAR_12 >> 24) {
   FUNC_7(" %ju", (uintmax_t)FUNC_0(VAR_11));
   VAR_12 &= (1 << 24) - 1;
  }

  FUNC_3(VAR_9, VAR_14, &VAR_10);
  FUNC_8(VAR_4);

  VAR_16 = FUNC_2(VAR_8, VAR_10, 0, VAR_13);
  FUNC_4(VAR_9, VAR_14, VAR_10);
  if (VAR_16)
   break;
  VAR_11 -= VAR_14;
  VAR_9 += VAR_13;


  VAR_15 = FUNC_1();
  if (VAR_15 == 0x03)
   return (VAR_0);
  if (VAR_15 != -1)
   FUNC_7(" (CTRL-C to abort) ");
 }
 FUNC_7(" ... %s\n", (VAR_16) ? "fail" : "ok");
 return (VAR_16);
}
