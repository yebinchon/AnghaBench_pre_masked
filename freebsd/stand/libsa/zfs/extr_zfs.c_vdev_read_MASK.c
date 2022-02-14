
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vdev_t ;
typedef unsigned int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ,unsigned int*) ;
 int FUNC_1 (int,unsigned int,int ) ;
 int FUNC_2 (char*,char*,unsigned int) ;
 unsigned int FUNC_3 (unsigned int,size_t) ;
 int FUNC_4 (char*) ;
 size_t FUNC_5 (int,char*,unsigned int) ;
 size_t FUNC_6 (size_t,unsigned int) ;
 char* FUNC_7 (unsigned int) ;
 int FUNC_8 (char*,unsigned int) ;

__attribute__((used)) static int
FUNC_9(vdev_t *VAR_5, void *VAR_6, off_t VAR_7, void *VAR_8, size_t VAR_9)
{
 int VAR_10, VAR_11;
 size_t VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 unsigned VAR_17, VAR_18;
 off_t VAR_19;
 char *VAR_20, *VAR_21;

 VAR_10 = (uintptr_t) VAR_6;
 VAR_20 = (char *) VAR_8;
 VAR_21 = ((void*)0);

 VAR_11 = FUNC_0(VAR_10, VAR_0, &VAR_17);
 if (VAR_11 != 0)
  return (VAR_11);
 VAR_19 = VAR_7 / VAR_17;
 VAR_13 = VAR_7 % VAR_17;
 VAR_15 = FUNC_6(VAR_13 + VAR_9, VAR_17);
 VAR_14 = VAR_15 - (VAR_13 + VAR_9);
 VAR_18 = ((VAR_14 > 0) && (VAR_13 + VAR_9 > VAR_17));
 VAR_16 = VAR_15;
 if (VAR_13 > 0)
  VAR_16 -= VAR_17;
 if (VAR_18)
  VAR_16 -= VAR_17;


 if ((VAR_13 > 0) || VAR_18) {
  VAR_21 = FUNC_7(VAR_17);
  if (VAR_21 == ((void*)0)) {
   FUNC_4("vdev_read: out of memory\n");
   return (VAR_2);
  }
 }

 if (FUNC_1(VAR_10, VAR_19 * VAR_17, VAR_3) == -1) {
  VAR_11 = VAR_4;
  goto error;
 }


 if (VAR_13 > 0) {
  VAR_12 = FUNC_5(VAR_10, VAR_21, VAR_17);
  if (VAR_12 != VAR_17) {
   VAR_11 = VAR_1;
   goto error;
  }
  FUNC_2(VAR_20, VAR_21 + VAR_13, FUNC_3(VAR_17 - VAR_13, VAR_9));
  VAR_20 += FUNC_3(VAR_17 - VAR_13, VAR_9);
 }


 if (VAR_16 > 0) {
  VAR_12 = FUNC_5(VAR_10, VAR_20, VAR_16);
  if (VAR_12 != VAR_16) {
   VAR_11 = VAR_1;
   goto error;
  }
  VAR_20 += VAR_16;
 }


 if (VAR_18) {
  VAR_12 = FUNC_5(VAR_10, VAR_21, VAR_17);
  if (VAR_12 != VAR_17) {
   VAR_11 = VAR_1;
   goto error;
  }
  FUNC_2(VAR_20, VAR_21, VAR_17 - VAR_14);
 }

 VAR_11 = 0;
error:
 if (VAR_21 != ((void*)0))
  FUNC_8(VAR_21, VAR_17);
 return (VAR_11);
}
