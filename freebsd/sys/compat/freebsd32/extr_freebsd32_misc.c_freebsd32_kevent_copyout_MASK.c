
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct kevent32 {int data1; int data2; int* ext64; } ;
struct kevent {int data; int* ext; } ;
struct freebsd32_kevent_args {int eventlist; } ;


 int FUNC_0 (struct kevent,struct kevent32,int ) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct kevent,struct kevent32,int ) ;
 int FUNC_3 (struct kevent32*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_5(void *VAR_6, struct kevent *VAR_7, int VAR_8)
{
 struct freebsd32_kevent_args *VAR_9;
 struct kevent32 VAR_10[VAR_0];
 uint64_t VAR_11;
 int VAR_12, VAR_13, VAR_14;

 FUNC_1(VAR_8 <= VAR_0, ("count (%d) > KQ_NEVENTS", VAR_8));
 VAR_9 = (struct freebsd32_kevent_args *)VAR_6;

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  FUNC_0(VAR_7[VAR_12], VAR_10[VAR_12], VAR_4);
  FUNC_0(VAR_7[VAR_12], VAR_10[VAR_12], VAR_2);
  FUNC_0(VAR_7[VAR_12], VAR_10[VAR_12], VAR_3);
  FUNC_0(VAR_7[VAR_12], VAR_10[VAR_12], VAR_1);

  VAR_10[VAR_12].data1 = VAR_7[VAR_12].data;
  VAR_10[VAR_12].data2 = VAR_7[VAR_12].data >> 32;




  FUNC_2(VAR_7[VAR_12], VAR_10[VAR_12], VAR_5);
  for (VAR_13 = 0; VAR_13 < FUNC_4(VAR_7->ext); VAR_13++) {
   VAR_11 = VAR_7[VAR_12].ext[VAR_13];

   VAR_10[VAR_12].ext64[2 * VAR_13] = VAR_11;
   VAR_10[VAR_12].ext64[2 * VAR_13 + 1] = VAR_11 >> 32;




  }
 }
 VAR_14 = FUNC_3(VAR_10, VAR_9->eventlist, VAR_8 * sizeof *VAR_10);
 if (VAR_14 == 0)
  VAR_9->eventlist += VAR_8;
 return (VAR_14);
}
