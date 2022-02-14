
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int quad_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int*) ;
 int FUNC_1 (char*,int*) ;
 int FUNC_2 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int,int ) ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_4(void *VAR_14)
{
 quad_t VAR_15;






 VAR_15 = FUNC_3((quad_t)VAR_12 * VAR_5, VAR_13);
 VAR_6 = VAR_15 / 2;
 FUNC_1("kern.ipc.maxmbufmem", &VAR_6);
 if (VAR_6 > VAR_15 / 4 * 3)
  VAR_6 = VAR_15 / 4 * 3;

 FUNC_0("kern.ipc.nmbclusters", &VAR_7);
 if (VAR_7 == 0)
  VAR_7 = VAR_6 / VAR_0 / 4;

 FUNC_0("kern.ipc.nmbjumbop", &VAR_10);
 if (VAR_10 == 0)
  VAR_10 = VAR_6 / VAR_3 / 4;

 FUNC_0("kern.ipc.nmbjumbo9", &VAR_9);
 if (VAR_9 == 0)
  VAR_9 = VAR_6 / VAR_2 / 6;

 FUNC_0("kern.ipc.nmbjumbo16", &VAR_8);
 if (VAR_8 == 0)
  VAR_8 = VAR_6 / VAR_1 / 6;





 FUNC_0("kern.ipc.nmbufs", &VAR_11);
 if (VAR_11 < VAR_7 + VAR_10 + VAR_9 + VAR_8)
  VAR_11 = FUNC_2(VAR_6 / VAR_4 / 5,
      VAR_7 + VAR_10 + VAR_9 + VAR_8);
}
