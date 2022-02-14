
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 long FUNC_2 (int ,long) ;
 long VAR_9 ;
 long VAR_10 ;
 int VAR_11 ;
 long VAR_12 ;
 long VAR_13 ;
 int VAR_14 ;
 long VAR_15 ;
 long VAR_16 ;
 long VAR_17 ;

void
FUNC_3(long VAR_18)
{


 VAR_14 = VAR_1;
 FUNC_0("kern.maxusers", &VAR_14);
 if (VAR_14 == 0) {
  VAR_14 = VAR_18 / (2 * 1024 * 1024 / VAR_4);
  if (VAR_14 < 32)
   VAR_14 = 32;
                if (VAR_14 > 384)
                        VAR_14 = 384 + ((VAR_14 - 384) / 8);
        }







 VAR_12 = VAR_3;
 FUNC_0("kern.maxproc", &VAR_12);
 if (VAR_12 > (VAR_18 / 12))
  VAR_12 = VAR_18 / 12;
 if (VAR_12 > VAR_17)
  VAR_12 = VAR_17;
 VAR_13 = (VAR_12 * 9) / 10;






 VAR_9 = FUNC_2(VAR_0, VAR_18 / 8);
 FUNC_0("kern.maxfiles", &VAR_9);
 if (VAR_9 > (VAR_18 / 4))
  VAR_9 = VAR_18 / 4;
 VAR_10 = (VAR_9 / 10) * 9;
 FUNC_0("kern.maxfilesperproc", &VAR_10);




 VAR_15 = VAR_2;
 FUNC_0("kern.nbuf", &VAR_15);
 FUNC_0("kern.bio_transient_maxcnt", &VAR_8);





 FUNC_0("kern.nswbuf", &VAR_16);





 VAR_11 = (VAR_18 / 64) * VAR_4;
 FUNC_1("kern.ipc.maxpipekva", &VAR_11);
 if (VAR_11 < 512 * 1024)
  VAR_11 = 512 * 1024;
 if (VAR_11 > (VAR_6 - VAR_7) / 64)
  VAR_11 = (VAR_6 - VAR_7) /
      64;
}
