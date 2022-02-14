
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_22__ {int * idx; int stream_padding; } ;
typedef TYPE_2__ xz_file_info ;
typedef scalar_t__ uint64_t ;
typedef int off_t ;
typedef scalar_t__ lzma_vli ;
struct TYPE_23__ {scalar_t__ version; scalar_t__ backward_size; } ;
typedef TYPE_3__ lzma_stream_flags ;
struct TYPE_24__ {int avail_in; int next_in; } ;
typedef TYPE_4__ lzma_stream ;
typedef int lzma_ret ;
typedef int lzma_index ;
struct TYPE_25__ {scalar_t__* u32; int u8; } ;
typedef TYPE_5__ io_buf ;
struct TYPE_21__ {int st_size; } ;
struct TYPE_26__ {int src_name; TYPE_1__ src_st; } ;
typedef TYPE_6__ file_pair ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_6__*,TYPE_5__*,int,int) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (TYPE_4__*,int **,scalar_t__) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_3__*) ;
 int FUNC_10 (int *,scalar_t__) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,int ) ;
 int FUNC_15 (TYPE_3__*,int ) ;
 int FUNC_16 () ;
 int FUNC_17 (char*,int ,...) ;
 int FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_21(xz_file_info *VAR_13, file_pair *VAR_14)
{
 if (VAR_14->src_st.st_size <= 0) {
  FUNC_17(FUNC_0("%s: File is empty"), VAR_14->src_name);
  return 1;
 }

 if (VAR_14->src_st.st_size < 2 * VAR_8) {
  FUNC_17(FUNC_0("%s: Too small to be a valid .xz file"),
    VAR_14->src_name);
  return 1;
 }

 io_buf VAR_15;
 lzma_stream_flags VAR_16;
 lzma_stream_flags VAR_17;
 lzma_ret VAR_18;


 lzma_stream VAR_19 = VAR_9;


 lzma_index *VAR_20 = ((void*)0);


 lzma_index *VAR_21 = ((void*)0);



 off_t VAR_22 = VAR_14->src_st.st_size;


 do {



  if (VAR_22 < 2 * VAR_8) {
   FUNC_17("%s: %s", VAR_14->src_name,
     FUNC_19(VAR_2));
   goto error;
  }

  VAR_22 -= VAR_8;
  lzma_vli VAR_23 = 0;



  while (1) {
   if (VAR_22 < VAR_8) {
    FUNC_17("%s: %s", VAR_14->src_name,
      FUNC_19(
       VAR_2));
    goto error;
   }

   if (FUNC_2(VAR_14, &VAR_15,
     VAR_8, VAR_22))
    goto error;


   int VAR_24 = 2;
   if (VAR_15.u32[VAR_24] != 0)
    break;





   do {
    VAR_23 += 4;
    VAR_22 -= 4;
    --VAR_24;
   } while (VAR_24 >= 0 && VAR_15.u32[VAR_24] == 0);
  }


  VAR_18 = FUNC_14(&VAR_17, VAR_15.u8);
  if (VAR_18 != VAR_4) {
   FUNC_17("%s: %s", VAR_14->src_name,
     FUNC_19(VAR_18));
   goto error;
  }
  if (VAR_17.version != 0) {
   FUNC_17("%s: %s", VAR_14->src_name,
     FUNC_19(VAR_5));
   goto error;
  }


  lzma_vli VAR_25 = VAR_17.backward_size;
  if ((lzma_vli)(VAR_22) < VAR_25 + VAR_8) {
   FUNC_17("%s: %s", VAR_14->src_name,
     FUNC_19(VAR_2));
   goto error;
  }


  VAR_22 -= VAR_25;


  uint64_t VAR_26 = FUNC_1(VAR_10);
  uint64_t VAR_27 = 0;
  if (VAR_20 != ((void*)0)) {
   VAR_27 = FUNC_8(VAR_20);
   if (VAR_27 > VAR_26)
    FUNC_16();

   VAR_26 -= VAR_27;
  }


  VAR_18 = FUNC_6(&VAR_19, &VAR_21, VAR_26);
  if (VAR_18 != VAR_4) {
   FUNC_17("%s: %s", VAR_14->src_name,
     FUNC_19(VAR_18));
   goto error;
  }

  do {


   VAR_19.avail_in = FUNC_20(VAR_0, VAR_25);
   if (FUNC_2(VAR_14, &VAR_15, VAR_19.avail_in, VAR_22))
    goto error;

   VAR_22 += VAR_19.avail_in;
   VAR_25 -= VAR_19.avail_in;

   VAR_19.next_in = VAR_15.u8;
   VAR_18 = FUNC_3(&VAR_19, VAR_6);

  } while (VAR_18 == VAR_4);




  if (VAR_18 == VAR_7)
   if (VAR_25 != 0 || VAR_19.avail_in != 0)
    VAR_18 = VAR_2;

  if (VAR_18 != VAR_7) {





   if (VAR_18 == VAR_1)
    VAR_18 = VAR_2;

   FUNC_17("%s: %s", VAR_14->src_name,
     FUNC_19(VAR_18));



   if (VAR_18 == VAR_3) {
    uint64_t VAR_28 = FUNC_12(&VAR_19);
    if (VAR_11 - VAR_28 < VAR_27)
     VAR_28 = VAR_11;
    else
     VAR_28 += VAR_27;

    FUNC_18(VAR_12, VAR_28);
   }

   goto error;
  }



  VAR_22 -= VAR_17.backward_size + VAR_8;
  if ((lzma_vli)(VAR_22) < FUNC_11(VAR_21)) {
   FUNC_17("%s: %s", VAR_14->src_name,
     FUNC_19(VAR_2));
   goto error;
  }

  VAR_22 -= FUNC_11(VAR_21);
  if (FUNC_2(VAR_14, &VAR_15, VAR_8, VAR_22))
   goto error;

  VAR_18 = FUNC_15(&VAR_16, VAR_15.u8);
  if (VAR_18 != VAR_4) {
   FUNC_17("%s: %s", VAR_14->src_name,
     FUNC_19(VAR_18));
   goto error;
  }

  VAR_18 = FUNC_13(&VAR_16, &VAR_17);
  if (VAR_18 != VAR_4) {
   FUNC_17("%s: %s", VAR_14->src_name,
     FUNC_19(VAR_18));
   goto error;
  }




  VAR_18 = FUNC_9(VAR_21, &VAR_17);
  if (VAR_18 != VAR_4)
   FUNC_16();



  VAR_18 = FUNC_10(VAR_21, VAR_23);
  if (VAR_18 != VAR_4)
   FUNC_16();

  if (VAR_20 != ((void*)0)) {


   VAR_18 = FUNC_5(
     VAR_21, VAR_20, ((void*)0));
   if (VAR_18 != VAR_4) {
    FUNC_17("%s: %s", VAR_14->src_name,
      FUNC_19(VAR_18));
    goto error;
   }
  }

  VAR_20 = VAR_21;
  VAR_21 = ((void*)0);

  VAR_13->stream_padding += VAR_23;

 } while (VAR_22 > 0);

 FUNC_4(&VAR_19);


 VAR_13->idx = VAR_20;
 return 0;

error:

 FUNC_4(&VAR_19);
 FUNC_7(VAR_20, ((void*)0));
 FUNC_7(VAR_21, ((void*)0));
 return 1;
}
